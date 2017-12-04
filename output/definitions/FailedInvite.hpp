#ifndef SWAGGER_TYPES_FailedInvite_HPP
#define SWAGGER_TYPES_FailedInvite_HPP
#include <json.hpp>
#include "ClientRequestError.hpp"
namespace leagueapi {
  // 
  struct FailedInvite {
    // 
    ClientRequestError exception;
    // 
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const FailedInvite& v) {
    j["exception"] = v.exception;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, FailedInvite& v) {
    v.exception = j.at("exception").get<ClientRequestError>;
    v.playerId = j.at("playerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_FailedInvite_HPP
