#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatLcuSocialConfig_t {
    bool SilenceChatWhileInGame;
    bool ForceChatFilter;
    bool AggressiveScanning;
    uint64_t QueueJobGraceSeconds;
  };

  inline void to_json(nlohmann::json& j, const LolChatLcuSocialConfig_t& v) {
    j["SilenceChatWhileInGame"] = v.SilenceChatWhileInGame;
    j["ForceChatFilter"] = v.ForceChatFilter;
    j["AggressiveScanning"] = v.AggressiveScanning;
    j["QueueJobGraceSeconds"] = v.QueueJobGraceSeconds;
  }

  inline void from_json(const nlohmann::json& j, LolChatLcuSocialConfig_t& v) {
    v.SilenceChatWhileInGame = j.at("SilenceChatWhileInGame").get<bool>();
    v.ForceChatFilter = j.at("ForceChatFilter").get<bool>();
    v.AggressiveScanning = j.at("AggressiveScanning").get<bool>();
    v.QueueJobGraceSeconds = j.at("QueueJobGraceSeconds").get<uint64_t>();
  }
}
