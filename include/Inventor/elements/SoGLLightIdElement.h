/**************************************************************************\
 *
 *  Copyright (C) 1998-1999 by Systems in Motion.  All rights reserved.
 *
 *  This file is part of the Coin library.
 *
 *  This file may be distributed under the terms of the Q Public License
 *  as defined by Troll Tech AS of Norway and appearing in the file
 *  LICENSE.QPL included in the packaging of this file.
 *
 *  If you want to use Coin in applications not covered by licenses
 *  compatible with the QPL, you can contact SIM to aquire a
 *  Professional Edition license for Coin.
 *
 *  Systems in Motion AS, Prof. Brochs gate 6, N-7030 Trondheim, NORWAY
 *  http://www.sim.no/ sales@sim.no Voice: +47 22114160 Fax: +47 67172912
 *
\**************************************************************************/

#ifndef __SOGLLIGHTIDELEMENT_H__
#define __SOGLLIGHTIDELEMENT_H__

#include <Inventor/confdep.h>
#if defined(COIN_EXCLUDE_SOGLLIGHTIDELEMENT)
#error "Configuration settings disrespected -- do not include this file!"
#endif // COIN_EXCLUDE_SOGLLIGHTIDELEMENT

#include <Inventor/elements/SoInt32Element.h>

class SoGLLightIdElement : public SoInt32Element {
  typedef SoInt32Element inherited;

  SO_ELEMENT_HEADER(SoGLLightIdElement);
public:
  static void initClass(void);
protected:
  virtual ~SoGLLightIdElement();

public:
  virtual void init(SoState * state);

  virtual void push(SoState * state);
  virtual void pop(SoState * state,
                   const SoElement * prevTopElement);

  static int32_t increment(SoState * const state, SoNode * const node);
  static int32_t increment(SoState * const state);

  static int32_t get(SoState * const state);
  static int32_t getDefault();
  static int32_t getMaxGLSources();

protected:
  static int32_t maxGLSources;

};

#endif // !__SOGLLIGHTIDELEMENT_H__
