#ifndef SWAGGER_TYPES_ReplayResponseStatus_HPP
#define SWAGGER_TYPES_ReplayResponseStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class ReplayResponseStatus {
    // 
    BAD_REQUEST = 3,
    // 
    EXPIRED = 2,
    // 
    INTERNAL_SERVER_ERROR = 4,
    // 
    NOT_FOUND = 1,
    // 
    OK = 0,
  };

  inline void to_json(nlohmann::json& j, const ReplayResponseStatus& v) {
    switch(v) {
      case ReplayResponseStatus::BAD_REQUEST:
        j = "BAD_REQUEST";
      break;
      case ReplayResponseStatus::EXPIRED:
        j = "EXPIRED";
      break;
      case ReplayResponseStatus::INTERNAL_SERVER_ERROR:
        j = "INTERNAL_SERVER_ERROR";
      break;
      case ReplayResponseStatus::NOT_FOUND:
        j = "NOT_FOUND";
      break;
      case ReplayResponseStatus::OK:
        j = "OK";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ReplayResponseStatus& v) {
    const auto& s = j.get<std::string>();
    if(s == "BAD_REQUEST"){
      v = ReplayResponseStatus::BAD_REQUEST;
      return;
    }
    if(s == "EXPIRED"){
      v = ReplayResponseStatus::EXPIRED;
      return;
    }
    if(s == "INTERNAL_SERVER_ERROR"){
      v = ReplayResponseStatus::INTERNAL_SERVER_ERROR;
      return;
    }
    if(s == "NOT_FOUND"){
      v = ReplayResponseStatus::NOT_FOUND;
      return;
    }
    if(s == "OK"){
      v = ReplayResponseStatus::OK;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_ReplayResponseStatus_HPP
