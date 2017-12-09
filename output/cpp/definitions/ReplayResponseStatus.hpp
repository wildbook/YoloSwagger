#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class ReplayResponseStatus_t {
    OK_E = 0,
    BAD_REQUEST_E = 3,
    EXPIRED_E = 2,
    NOT_FOUND_E = 1,
    INTERNAL_SERVER_ERROR_E = 4,
  };

  inline void to_json(nlohmann::json& j, const ReplayResponseStatus_t& v) {
    switch(v) {
      case ReplayResponseStatus_t::OK_E:
        j = "OK";
      break;
      case ReplayResponseStatus_t::BAD_REQUEST_E:
        j = "BAD_REQUEST";
      break;
      case ReplayResponseStatus_t::EXPIRED_E:
        j = "EXPIRED";
      break;
      case ReplayResponseStatus_t::NOT_FOUND_E:
        j = "NOT_FOUND";
      break;
      case ReplayResponseStatus_t::INTERNAL_SERVER_ERROR_E:
        j = "INTERNAL_SERVER_ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ReplayResponseStatus_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "OK"){
      v = ReplayResponseStatus_t::OK_E;
      return;
    }
    if(s == "BAD_REQUEST"){
      v = ReplayResponseStatus_t::BAD_REQUEST_E;
      return;
    }
    if(s == "EXPIRED"){
      v = ReplayResponseStatus_t::EXPIRED_E;
      return;
    }
    if(s == "NOT_FOUND"){
      v = ReplayResponseStatus_t::NOT_FOUND_E;
      return;
    }
    if(s == "INTERNAL_SERVER_ERROR"){
      v = ReplayResponseStatus_t::INTERNAL_SERVER_ERROR_E;
      return;
    }
  }
  inline std::string to_string(const ReplayResponseStatus_t& v) {
    switch(v) {
      case ReplayResponseStatus_t::OK_E:
        return "OK";
      case ReplayResponseStatus_t::BAD_REQUEST_E:
        return "BAD_REQUEST";
      case ReplayResponseStatus_t::EXPIRED_E:
        return "EXPIRED";
      case ReplayResponseStatus_t::NOT_FOUND_E:
        return "NOT_FOUND";
      case ReplayResponseStatus_t::INTERNAL_SERVER_ERROR_E:
        return "INTERNAL_SERVER_ERROR";
    }
  }

}
