#ifndef SWAGGER_TYPES_FailedInvite_HPP
#define SWAGGER_TYPES_FailedInvite_HPP
#include <json.hpp>
#include "ClientRequestError.hpp"
namespace leagueapi {
  // 
  struct FailedInvite {
    // 
    uint64_t playerId;
    // 
    ClientRequestError exception;
  };

  inline void to_json(nlohmann::json& j, const FailedInvite& v) {
    j["playerId"] = v.playerId;
    j["exception"] = v.exception;
  }

  inline void from_json(const nlohmann::json& j, FailedInvite& v) {
    v.playerId = j.at("playerId").get<uint64_t>;
    v.exception = j.at("exception").get<ClientRequestError>;
  }

}
#endif // SWAGGER_TYPES_FailedInvite_HPP
