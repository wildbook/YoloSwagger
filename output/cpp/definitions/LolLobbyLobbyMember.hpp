#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
#include "LolLobbyLobbyPositionPreferences.hpp"
namespace leagueapi {
  struct LolLobbyLobbyMember_t {
    bool autoFillEligible;
    std::optional<std::string> excludedPositionPreference;
    bool isOwner;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    bool showPositionExcluder;
    int32_t botChampionId;
    bool autoFillProtectedForSoloing;
    bool autoFillProtectedForPromos;
    LolLobbyLobbyPositionPreferences_t positionPreferences;
    bool canInviteOthers;
    bool isBot;
    std::string summonerInternalName;
    uint64_t id;
    bool isSpectator;
    bool autoFillProtectedForStreaking;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMember_t& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["isOwner"] = v.isOwner;
    j["botDifficulty"] = v.botDifficulty;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["botChampionId"] = v.botChampionId;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["positionPreferences"] = v.positionPreferences;
    j["canInviteOthers"] = v.canInviteOthers;
    j["isBot"] = v.isBot;
    j["summonerInternalName"] = v.summonerInternalName;
    j["id"] = v.id;
    j["isSpectator"] = v.isSpectator;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMember_t& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
    v.isOwner = j.at("isOwner").get<bool>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.botChampionId = j.at("botChampionId").get<int32_t>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyLobbyPositionPreferences_t>();
    v.canInviteOthers = j.at("canInviteOthers").get<bool>();
    v.isBot = j.at("isBot").get<bool>();
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.isSpectator = j.at("isSpectator").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
  }
  inline std::string to_string(const LolLobbyLobbyMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
