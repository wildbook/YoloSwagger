#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsGameInviteBaseRuntimeException.hpp"
namespace leagueapi {
  struct LcdsInviteFailed_t {
    std::string summonerName;
    LcdsGameInviteBaseRuntimeException_t exception;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LcdsInviteFailed_t& v) {
    j["summonerName"] = v.summonerName;
    j["exception"] = v.exception;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LcdsInviteFailed_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.exception = j.at("exception").get<LcdsGameInviteBaseRuntimeException_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LcdsInviteFailed_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
