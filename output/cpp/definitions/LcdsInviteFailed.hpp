#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsGameInviteBaseRuntimeException.hpp"
namespace leagueapi {
  struct LcdsInviteFailed_t {
    LcdsGameInviteBaseRuntimeException_t exception;
    std::string summonerName;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LcdsInviteFailed_t& v) {
    j["exception"] = v.exception;
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LcdsInviteFailed_t& v) {
    v.exception = j.at("exception").get<LcdsGameInviteBaseRuntimeException_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LcdsInviteFailed_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
