#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatLcuSocialConfig_t {
    bool_t ForceChatFilter;
    bool_t AggressiveScanning;
    uint64_t_t QueueJobGraceSeconds;
    bool_t SilenceChatWhileInGame;
  };

  inline void to_json(nlohmann::json& j, const LolChatLcuSocialConfig_t& v) {
    j["ForceChatFilter"] = v.ForceChatFilter;
    j["AggressiveScanning"] = v.AggressiveScanning;
    j["QueueJobGraceSeconds"] = v.QueueJobGraceSeconds;
    j["SilenceChatWhileInGame"] = v.SilenceChatWhileInGame;
  }

  inline void from_json(const nlohmann::json& j, LolChatLcuSocialConfig_t& v) {
    v.ForceChatFilter = j.at("ForceChatFilter").get<bool_t>();
    v.AggressiveScanning = j.at("AggressiveScanning").get<bool_t>();
    v.QueueJobGraceSeconds = j.at("QueueJobGraceSeconds").get<uint64_t_t>();
    v.SilenceChatWhileInGame = j.at("SilenceChatWhileInGame").get<bool_t>();
  }
  inline std::string to_string(const LolChatLcuSocialConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
