#pragma once
#include <json.hpp>
#include <optional>
#include "ClientRequestError.hpp"
namespace leagueapi {
  struct FailedInvite_t {
    ClientRequestError_t exception;
    uint64_t playerId;
  };

  inline void to_json(nlohmann::json& j, const FailedInvite_t& v) {
    j["exception"] = v.exception;
    j["playerId"] = v.playerId;
  }

  inline void from_json(const nlohmann::json& j, FailedInvite_t& v) {
    v.exception = j.at("exception").get<ClientRequestError_t>();
    v.playerId = j.at("playerId").get<uint64_t>();
  }
}
