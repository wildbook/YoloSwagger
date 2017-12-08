#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsGameInviteBaseRuntimeException.hpp"
namespace leagueapi {
  struct LcdsInviteFailed_t {
    LcdsGameInviteBaseRuntimeException_t exception;
    uint64_t_t summonerId;
    std::string_t summonerName;
  };

  inline void to_json(nlohmann::json& j, const LcdsInviteFailed_t& v) {
    j["exception"] = v.exception;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LcdsInviteFailed_t& v) {
    v.exception = j.at("exception").get<LcdsGameInviteBaseRuntimeException_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
  }
  inline std::string to_string(const LcdsInviteFailed_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
