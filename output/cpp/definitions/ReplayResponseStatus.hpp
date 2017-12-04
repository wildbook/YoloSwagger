#ifndef SWAGGER_TYPES_ReplayResponseStatus_HPP
#define SWAGGER_TYPES_ReplayResponseStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class ReplayResponseStatus {
    // 
    OK = 0,
    // 
    EXPIRED = 2,
    // 
    NOT_FOUND = 1,
    // 
    BAD_REQUEST = 3,
    // 
    INTERNAL_SERVER_ERROR = 4,
  };

  inline void to_json(nlohmann::json& j, const ReplayResponseStatus& v) {
    switch(v) {
      case ReplayResponseStatus::OK:
        j = "OK";
      break;
      case ReplayResponseStatus::EXPIRED:
        j = "EXPIRED";
      break;
      case ReplayResponseStatus::NOT_FOUND:
        j = "NOT_FOUND";
      break;
      case ReplayResponseStatus::BAD_REQUEST:
        j = "BAD_REQUEST";
      break;
      case ReplayResponseStatus::INTERNAL_SERVER_ERROR:
        j = "INTERNAL_SERVER_ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ReplayResponseStatus& v) {
    const auto& s = j.get<std::string>();
    if(s == "OK"){
      v = ReplayResponseStatus::OK;
      return;
    }
    if(s == "EXPIRED"){
      v = ReplayResponseStatus::EXPIRED;
      return;
    }
    if(s == "NOT_FOUND"){
      v = ReplayResponseStatus::NOT_FOUND;
      return;
    }
    if(s == "BAD_REQUEST"){
      v = ReplayResponseStatus::BAD_REQUEST;
      return;
    }
    if(s == "INTERNAL_SERVER_ERROR"){
      v = ReplayResponseStatus::INTERNAL_SERVER_ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_ReplayResponseStatus_HPP
