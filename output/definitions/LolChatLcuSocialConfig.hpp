#ifndef SWAGGER_TYPES_LolChatLcuSocialConfig_HPP
#define SWAGGER_TYPES_LolChatLcuSocialConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatLcuSocialConfig {
    // 
    bool AggressiveScanning;
    // 
    bool ForceChatFilter;
    // 
    uint64_t QueueJobGraceSeconds;
    // 
    bool SilenceChatWhileInGame;
  };

  void to_json(nlohmann::json& j, const LolChatLcuSocialConfig& v) {
    j["AggressiveScanning"] = v.AggressiveScanning;
    j["ForceChatFilter"] = v.ForceChatFilter;
    j["QueueJobGraceSeconds"] = v.QueueJobGraceSeconds;
    j["SilenceChatWhileInGame"] = v.SilenceChatWhileInGame;
  }

  void from_json(const nlohmann::json& j, LolChatLcuSocialConfig& v) {
    v.AggressiveScanning = j.at("AggressiveScanning").get<bool>;
    v.ForceChatFilter = j.at("ForceChatFilter").get<bool>;
    v.QueueJobGraceSeconds = j.at("QueueJobGraceSeconds").get<uint64_t>;
    v.SilenceChatWhileInGame = j.at("SilenceChatWhileInGame").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolChatLcuSocialConfig_HPP
