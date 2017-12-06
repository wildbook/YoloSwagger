#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderLobbyPositionPreferences.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyMember_t {
    bool autoFillEligible;
    LolLobbyTeamBuilderLobbyPositionPreferences_t positionPreferences;
    uint64_t id;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForStreaking;
    std::optional<std::string> excludedPositionPreference;
    bool autoFillProtectedForSoloing;
    bool isOwner;
    bool showPositionExcluder;
    bool canInviteOthers;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyMember_t& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["positionPreferences"] = v.positionPreferences;
    j["id"] = v.id;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["isOwner"] = v.isOwner;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["canInviteOthers"] = v.canInviteOthers;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyMember_t& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyTeamBuilderLobbyPositionPreferences_t>();
    v.id = j.at("id").get<uint64_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.isOwner = j.at("isOwner").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.canInviteOthers = j.at("canInviteOthers").get<bool>();
  }
}
