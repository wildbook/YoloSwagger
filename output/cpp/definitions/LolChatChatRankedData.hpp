#ifndef SWAGGER_TYPES_LolChatChatRankedData_HPP
#define SWAGGER_TYPES_LolChatChatRankedData_HPP
#include <json.hpp>
#include "LolChatChatRankedEntry.hpp"
namespace leagueapi {
  // 
  struct LolChatChatRankedData {
    // 
    uint64_t summonerId;
    // 
    std::vector<LolChatChatRankedEntry> rankedData;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedData& v) {
    j["summonerId"] = v.summonerId;
    j["rankedData"] = v.rankedData;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedData& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.rankedData = j.at("rankedData").get<std::vector<LolChatChatRankedEntry>>;
  }

}
#endif // SWAGGER_TYPES_LolChatChatRankedData_HPP
