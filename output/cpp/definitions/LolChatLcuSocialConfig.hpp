#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatLcuSocialConfig_t {
    uint64_t QueueJobGraceSeconds;
    bool AggressiveScanning;
    bool SilenceChatWhileInGame;
    bool ForceChatFilter;
  };

  inline void to_json(nlohmann::json& j, const LolChatLcuSocialConfig_t& v) {
    j["QueueJobGraceSeconds"] = v.QueueJobGraceSeconds;
    j["AggressiveScanning"] = v.AggressiveScanning;
    j["SilenceChatWhileInGame"] = v.SilenceChatWhileInGame;
    j["ForceChatFilter"] = v.ForceChatFilter;
  }

  inline void from_json(const nlohmann::json& j, LolChatLcuSocialConfig_t& v) {
    v.QueueJobGraceSeconds = j.at("QueueJobGraceSeconds").get<uint64_t>();
    v.AggressiveScanning = j.at("AggressiveScanning").get<bool>();
    v.SilenceChatWhileInGame = j.at("SilenceChatWhileInGame").get<bool>();
    v.ForceChatFilter = j.at("ForceChatFilter").get<bool>();
  }
  inline std::string to_string(const LolChatLcuSocialConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
