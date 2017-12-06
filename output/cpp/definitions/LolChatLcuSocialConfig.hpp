#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatLcuSocialConfig_t {
    bool AggressiveScanning;
    bool ForceChatFilter;
    uint64_t QueueJobGraceSeconds;
    bool SilenceChatWhileInGame;
  };

  inline void to_json(nlohmann::json& j, const LolChatLcuSocialConfig_t& v) {
    j["AggressiveScanning"] = v.AggressiveScanning;
    j["ForceChatFilter"] = v.ForceChatFilter;
    j["QueueJobGraceSeconds"] = v.QueueJobGraceSeconds;
    j["SilenceChatWhileInGame"] = v.SilenceChatWhileInGame;
  }

  inline void from_json(const nlohmann::json& j, LolChatLcuSocialConfig_t& v) {
    v.AggressiveScanning = j.at("AggressiveScanning").get<bool>();
    v.ForceChatFilter = j.at("ForceChatFilter").get<bool>();
    v.QueueJobGraceSeconds = j.at("QueueJobGraceSeconds").get<uint64_t>();
    v.SilenceChatWhileInGame = j.at("SilenceChatWhileInGame").get<bool>();
  }
}
