#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatLcuSocialConfig_t {
    bool ForceChatFilter;
    bool AggressiveScanning;
    uint64_t QueueJobGraceSeconds;
    bool SilenceChatWhileInGame;
  };

  inline void to_json(nlohmann::json& j, const LolChatLcuSocialConfig_t& v) {
    j["ForceChatFilter"] = v.ForceChatFilter;
    j["AggressiveScanning"] = v.AggressiveScanning;
    j["QueueJobGraceSeconds"] = v.QueueJobGraceSeconds;
    j["SilenceChatWhileInGame"] = v.SilenceChatWhileInGame;
  }

  inline void from_json(const nlohmann::json& j, LolChatLcuSocialConfig_t& v) {
    v.ForceChatFilter = j.at("ForceChatFilter").get<bool>();
    v.AggressiveScanning = j.at("AggressiveScanning").get<bool>();
    v.QueueJobGraceSeconds = j.at("QueueJobGraceSeconds").get<uint64_t>();
    v.SilenceChatWhileInGame = j.at("SilenceChatWhileInGame").get<bool>();
  }
  inline std::string to_string(const LolChatLcuSocialConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
