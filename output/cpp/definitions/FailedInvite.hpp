#pragma once
#include <json.hpp>
#include <optional>
#include "ClientRequestError.hpp"
namespace leagueapi {
  struct FailedInvite_t {
    uint64_t playerId;
    ClientRequestError_t exception;
  };

  inline void to_json(nlohmann::json& j, const FailedInvite_t& v) {
    j["playerId"] = v.playerId;
    j["exception"] = v.exception;
  }

  inline void from_json(const nlohmann::json& j, FailedInvite_t& v) {
    v.playerId = j.at("playerId").get<uint64_t>();
    v.exception = j.at("exception").get<ClientRequestError_t>();
  }
  inline std::string to_string(const FailedInvite_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
