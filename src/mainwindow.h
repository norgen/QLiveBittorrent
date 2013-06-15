#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QTimer>
#include <QDebug>
#include <QDir>
#include <QStandardItemModel>
#include <QSettings>
#include <QPainter>
#include <QMessageBox>
#include <QByteArray>

#include <torrent.h>
#include <generateimage.h>
#include <torrentdialog.h>

#include <iostream>
#include <fstream>
#include <iterator>
#include <iomanip>
#include "libtorrent/entry.hpp"
#include "libtorrent/bencode.hpp"
#include "libtorrent/torrent_info.hpp"
#include "libtorrent/lazy_entry.hpp"
#include "libtorrent/session.hpp"
#include "boost/filesystem/operations.hpp"

namespace Ui {
    class MainWindow;
}

using libtorrent::torrent_info;
using libtorrent::torrent_handle;
using libtorrent::torrent_status;
using libtorrent::add_torrent_params;

Q_DECLARE_METATYPE(libtorrent::entry)

const QString settingsFile = QDir::homePath() + "/.qlivebittorrent/qlivebittorrent.ini";

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    libtorrent::session *session;

    void initSession();
    void initTableWidgetHeader();
    void saveSettings();
    void loadSettings();
private slots:
    void addTorrent();
    void realAddTorrent(QString torrentFile, QString torrentPath, QString mountPath);
    void updateInform();
    void showAbout();
    void showAboutQt();
};

#endif // MAINWINDOW_H
