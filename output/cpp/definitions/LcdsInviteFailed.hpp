#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsGameInviteBaseRuntimeException.hpp"
namespace leagueapi {
  struct LcdsInviteFailed_t {
    uint64_t summonerId;
    std::string summonerName;
    LcdsGameInviteBaseRuntimeException_t exception;
  };

  inline void to_json(nlohmann::json& j, const LcdsInviteFailed_t& v) {
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["exception"] = v.exception;
  }

  inline void from_json(const nlohmann::json& j, LcdsInviteFailed_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.exception = j.at("exception").get<LcdsGameInviteBaseRuntimeException_t>();
  }
  inline std::string to_string(const LcdsInviteFailed_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
