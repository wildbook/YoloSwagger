#ifndef SWAGGER_TYPES_LolChatChatLoginDataPacket_HPP
#define SWAGGER_TYPES_LolChatChatLoginDataPacket_HPP
#include <json.hpp>
#include "LolChatChatLoginSummonerData.hpp"
#include "LolChatChatPlayerStatSummaries.hpp"
namespace leagueapi {
  // 
  struct LolChatChatLoginDataPacket {
    // 
    LolChatChatPlayerStatSummaries playerStatSummaries;
    // 
    LolChatChatLoginSummonerData allSummonerData;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatLoginDataPacket& v) {
    j["playerStatSummaries"] = v.playerStatSummaries;
    j["allSummonerData"] = v.allSummonerData;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatLoginDataPacket& v) {
    v.playerStatSummaries = j.at("playerStatSummaries").get<LolChatChatPlayerStatSummaries>;
    v.allSummonerData = j.at("allSummonerData").get<LolChatChatLoginSummonerData>;
  }

}
#endif // SWAGGER_TYPES_LolChatChatLoginDataPacket_HPP
