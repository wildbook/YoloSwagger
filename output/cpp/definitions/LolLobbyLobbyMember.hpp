#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyBotDifficulty.hpp"
#include "LolLobbyLobbyPositionPreferences.hpp"
namespace leagueapi {
  struct LolLobbyLobbyMember_t {
    std::string_t summonerInternalName;
    LolLobbyLobbyPositionPreferences_t positionPreferences;
    bool_t autoFillProtectedForPromos;
    bool_t autoFillEligible;
    int32_t_t botChampionId;
    bool_t isOwner;
    std::optional<std::string_t> excludedPositionPreference;
    bool_t showPositionExcluder;
    bool_t isBot;
    bool_t canInviteOthers;
    bool_t autoFillProtectedForStreaking;
    LolLobbyLobbyBotDifficulty_t botDifficulty;
    bool_t autoFillProtectedForSoloing;
    bool_t isSpectator;
    uint64_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMember_t& v) {
    j["summonerInternalName"] = v.summonerInternalName;
    j["positionPreferences"] = v.positionPreferences;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillEligible"] = v.autoFillEligible;
    j["botChampionId"] = v.botChampionId;
    j["isOwner"] = v.isOwner;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["isBot"] = v.isBot;
    j["canInviteOthers"] = v.canInviteOthers;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["botDifficulty"] = v.botDifficulty;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["isSpectator"] = v.isSpectator;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMember_t& v) {
    v.summonerInternalName = j.at("summonerInternalName").get<std::string_t>();
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyLobbyPositionPreferences_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool_t>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool_t>();
    v.botChampionId = j.at("botChampionId").get<int32_t_t>();
    v.isOwner = j.at("isOwner").get<bool_t>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::string_t>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool_t>();
    v.isBot = j.at("isBot").get<bool_t>();
    v.canInviteOthers = j.at("canInviteOthers").get<bool_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool_t>();
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty_t>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool_t>();
    v.isSpectator = j.at("isSpectator").get<bool_t>();
    v.id = j.at("id").get<uint64_t_t>();
  }
  inline std::string to_string(const LolLobbyLobbyMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
