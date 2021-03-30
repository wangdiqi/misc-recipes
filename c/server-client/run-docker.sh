#!/bin/bash

docker run -d -p 17001:7001 -e RSYNC_SERVER=172.16.10.23 -e SOLR_HOST=172.16.10.23:28005 -e REDIS_HOST=172.16.10.23 -e MYSQL_HOST=172.16.10.23 -e MONGO_HOST=172.16.10.23 -e SYSLOG_HOST=172.16.10.23 seventhking/c-server:0.0.1