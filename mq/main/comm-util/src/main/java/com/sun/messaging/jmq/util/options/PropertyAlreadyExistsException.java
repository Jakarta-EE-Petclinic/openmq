/*
 * Copyright (c) 2000, 2017 Oracle and/or its affiliates. All rights reserved.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v. 2.0, which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * This Source Code may also be made available under the following Secondary
 * Licenses when the conditions for such availability set forth in the
 * Eclipse Public License v. 2.0 are satisfied: GNU General Public License,
 * version 2 with the GNU Classpath Exception, which is available at
 * https://www.gnu.org/software/classpath/license.html.
 *
 * SPDX-License-Identifier: EPL-2.0 OR GPL-2.0 WITH Classpath-exception-2.0
 */

/*
 * @(#)PropertyAlreadyExistsException.java	1.5 06/29/07
 */

package com.sun.messaging.jmq.util.options;

/**
 * This exception is for reporting cases where the property name that is about to be written already exists in the
 * Properties object.
 **/

public class PropertyAlreadyExistsException extends OptionException {

    /**
     * 
     */
    private static final long serialVersionUID = 4408440739359989477L;
    String propName;

    /**
     * Sets the property name causing the problem - because it alredy exists in the Properties object.
     *
     * @param propName The property name that already exists.
     */
    public void setPropertyName(String propName) {
        this.propName = propName;
    }

    /**
     * Returns the property name that is causing the problem.
     *
     * @return The property name causing the problem.
     */
    public String getPropertyName() {
        return (propName);
    }
}
