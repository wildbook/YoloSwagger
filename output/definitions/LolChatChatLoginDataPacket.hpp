#ifndef SWAGGER_TYPES_LolChatChatLoginDataPacket_HPP
#define SWAGGER_TYPES_LolChatChatLoginDataPacket_HPP
#include <json.hpp>
#include "LolChatChatLoginSummonerData.hpp"
#include "LolChatChatPlayerStatSummaries.hpp"
namespace test {
  // 
  struct LolChatChatLoginDataPacket {
'    // 
    LolChatChatLoginSummonerData allSummonerData;
    // 
    LolChatChatPlayerStatSummaries playerStatSummaries;
  };

  void to_json(nlohmann::json& j, const LolChatChatLoginDataPacket& v) {
    j["allSummonerData"] = v.allSummonerData;
    j["playerStatSummaries"] = v.playerStatSummaries;
  }

  void from_json(const nlohmann::json& j, LolChatChatLoginDataPacket& v) {
    v.allSummonerData = j.at("allSummonerData").get<LolChatChatLoginSummonerData>;
    v.playerStatSummaries = j.at("playerStatSummaries").get<LolChatChatPlayerStatSummaries>;
  }

}
#endif // SWAGGER_TYPES_LolChatChatLoginDataPacket_HPP
