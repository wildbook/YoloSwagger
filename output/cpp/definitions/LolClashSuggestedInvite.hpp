#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashSuggestedInvite_t {
    uint64_t summonerId;
    uint64_t suggesterSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashSuggestedInvite_t& v) {
    j["summonerId"] = v.summonerId;
    j["suggesterSummonerId"] = v.suggesterSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashSuggestedInvite_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.suggesterSummonerId = j.at("suggesterSummonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolClashSuggestedInvite_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
