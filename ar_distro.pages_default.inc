<?php
/**
 * @file
 * ar_distro.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ar_distro_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_node_overview__panel_context_3adfcfdc-5414-4f47-9744-cff0a0d639aa';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'node_overview';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Principal',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'principal';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one' => NULL,
      'two' => NULL,
      'three' => NULL,
      'four' => NULL,
      'destacado' => NULL,
      'editorial_one' => NULL,
      'editorial_two' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9ebf9ab2-4c52-424b-aa04-11ea2c566896';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1db65824-0d81-4075-8136-f0e51f30aebd';
    $pane->panel = 'destacado';
    $pane->type = 'carrousel';
    $pane->subtype = 'carrousel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'tipos_de_contenido' => array(
        'noticia' => 'noticia',
        'page' => 0,
      ),
      'cantidad_de_slides' => '1',
      'tipo_noticia' => 'all',
      'tipo_tramite' => 'all',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1db65824-0d81-4075-8136-f0e51f30aebd';
    $display->content['new-1db65824-0d81-4075-8136-f0e51f30aebd'] = $pane;
    $display->panels['destacado'][0] = 'new-1db65824-0d81-4075-8136-f0e51f30aebd';
    $pane = new stdClass();
    $pane->pid = 'new-bca86c52-8f08-4b51-ba5c-0ef88fffee8c';
    $pane->panel = 'editorial_one';
    $pane->type = 'shortcut';
    $pane->subtype = 'shortcut';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'color_fondo' => 'shortcut-rojo',
      'icono' => 'glyphicon-heart',
      'titulo' => 'Shortcut1',
      'texto' => 'Este es un shorcut',
      'referencia' => array(),
      'link' => '/',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bca86c52-8f08-4b51-ba5c-0ef88fffee8c';
    $display->content['new-bca86c52-8f08-4b51-ba5c-0ef88fffee8c'] = $pane;
    $display->panels['editorial_one'][0] = 'new-bca86c52-8f08-4b51-ba5c-0ef88fffee8c';
    $pane = new stdClass();
    $pane->pid = 'new-0148e08c-590e-4c74-b9ca-73a70e641e7e';
    $pane->panel = 'editorial_one';
    $pane->type = 'shortcut';
    $pane->subtype = 'shortcut';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'color_fondo' => 'shortcut-naranja',
      'icono' => 'glyphicon-cog',
      'titulo' => 'Shortcut2',
      'texto' => '¿Tienes dudas de cómo funciona? Click aquí',
      'referencia' => array(),
      'link' => '/help',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0148e08c-590e-4c74-b9ca-73a70e641e7e';
    $display->content['new-0148e08c-590e-4c74-b9ca-73a70e641e7e'] = $pane;
    $display->panels['editorial_one'][1] = 'new-0148e08c-590e-4c74-b9ca-73a70e641e7e';
    $pane = new stdClass();
    $pane->pid = 'new-398ffeb4-ad4f-493b-8bb5-524e0e4a5804';
    $pane->panel = 'three';
    $pane->type = 'block';
    $pane->subtype = 'views-76aabb0b42bb454c9f363c228c2cf5b9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '398ffeb4-ad4f-493b-8bb5-524e0e4a5804';
    $display->content['new-398ffeb4-ad4f-493b-8bb5-524e0e4a5804'] = $pane;
    $display->panels['three'][0] = 'new-398ffeb4-ad4f-493b-8bb5-524e0e4a5804';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-398ffeb4-ad4f-493b-8bb5-524e0e4a5804';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_node_overview__panel_context_3adfcfdc-5414-4f47-9744-cff0a0d639aa'] = $handler;

  return $export;
}
