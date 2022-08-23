#!/bin/bash
git add .
git commit -m "Added file"
git push

