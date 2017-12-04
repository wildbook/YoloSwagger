#ifndef SWAGGER_TYPES_LolChatChatRankedData_HPP
#define SWAGGER_TYPES_LolChatChatRankedData_HPP
#include <json.hpp>
#include "LolChatChatRankedEntry.hpp"
namespace leagueapi {
  // 
  struct LolChatChatRankedData {
    // 
    std::vector<LolChatChatRankedEntry> rankedData;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedData& v) {
    j["rankedData"] = v.rankedData;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedData& v) {
    v.rankedData = j.at("rankedData").get<std::vector<LolChatChatRankedEntry>>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolChatChatRankedData_HPP
