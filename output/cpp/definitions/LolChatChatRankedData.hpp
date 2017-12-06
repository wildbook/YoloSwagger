#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatRankedEntry.hpp"
namespace leagueapi {
  struct LolChatChatRankedData_t {
    std::vector<LolChatChatRankedEntry_t> rankedData;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedData_t& v) {
    j["rankedData"] = v.rankedData;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedData_t& v) {
    v.rankedData = j.at("rankedData").get<std::vector<LolChatChatRankedEntry_t>>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
