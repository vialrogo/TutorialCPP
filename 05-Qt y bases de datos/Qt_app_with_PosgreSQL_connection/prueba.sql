--
-- PostgreSQL database dump
--

SET statement_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = off;
SET check_function_bodies = false;
SET client_min_messages = warning;
SET escape_string_warning = off;

--
-- Name: plpgsql; Type: PROCEDURAL LANGUAGE; Schema: -; Owner: postgres
--

CREATE OR REPLACE PROCEDURAL LANGUAGE plpgsql;


ALTER PROCEDURAL LANGUAGE plpgsql OWNER TO postgres;

SET search_path = public, pg_catalog;

SET default_tablespace = '';

SET default_with_oids = false;

--
-- Name: tabla; Type: TABLE; Schema: public; Owner: admin; Tablespace: 
--

CREATE TABLE tabla (
    id integer NOT NULL,
    nombre character varying(50)
);


ALTER TABLE public.tabla OWNER TO admin;

--
-- Name: tabla_id_seq; Type: SEQUENCE; Schema: public; Owner: admin
--

CREATE SEQUENCE tabla_id_seq
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;


ALTER TABLE public.tabla_id_seq OWNER TO admin;

--
-- Name: tabla_id_seq; Type: SEQUENCE OWNED BY; Schema: public; Owner: admin
--

ALTER SEQUENCE tabla_id_seq OWNED BY tabla.id;


--
-- Name: tabla_id_seq; Type: SEQUENCE SET; Schema: public; Owner: admin
--

SELECT pg_catalog.setval('tabla_id_seq', 3, true);


--
-- Name: id; Type: DEFAULT; Schema: public; Owner: admin
--

ALTER TABLE tabla ALTER COLUMN id SET DEFAULT nextval('tabla_id_seq'::regclass);


--
-- Data for Name: tabla; Type: TABLE DATA; Schema: public; Owner: admin
--

INSERT INTO tabla VALUES (1, 'Pedro');
INSERT INTO tabla VALUES (2, 'Juan');
INSERT INTO tabla VALUES (3, 'Manuel');


--
-- Name: public; Type: ACL; Schema: -; Owner: postgres
--

REVOKE ALL ON SCHEMA public FROM PUBLIC;
REVOKE ALL ON SCHEMA public FROM postgres;
GRANT ALL ON SCHEMA public TO postgres;
GRANT ALL ON SCHEMA public TO PUBLIC;


--
-- PostgreSQL database dump complete
--

