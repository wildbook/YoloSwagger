#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashInviteSubRequest_t {
    uint64_t replacedSummonerId;
    uint64_t substituteSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashInviteSubRequest_t& v) {
    j["replacedSummonerId"] = v.replacedSummonerId;
    j["substituteSummonerId"] = v.substituteSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashInviteSubRequest_t& v) {
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>();
    v.substituteSummonerId = j.at("substituteSummonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolClashInviteSubRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
