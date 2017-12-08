#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatRankedEntry.hpp"
namespace leagueapi {
  struct LolChatChatRankedData_t {
    uint64_t_t summonerId;
    std::vector<LolChatChatRankedEntry_t> rankedData;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedData_t& v) {
    j["summonerId"] = v.summonerId;
    j["rankedData"] = v.rankedData;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedData_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.rankedData = j.at("rankedData").get<std::vector<LolChatChatRankedEntry_t>>();
  }
  inline std::string to_string(const LolChatChatRankedData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
