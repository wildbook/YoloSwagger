#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderLobbyPositionPreferences.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyMember_t {
    bool autoFillEligible;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForSoloing;
    bool autoFillProtectedForStreaking;
    bool canInviteOthers;
    std::optional<std::string> excludedPositionPreference;
    uint64_t id;
    bool isOwner;
    LolLobbyTeamBuilderLobbyPositionPreferences_t positionPreferences;
    bool showPositionExcluder;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyMember_t& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["canInviteOthers"] = v.canInviteOthers;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["id"] = v.id;
    j["isOwner"] = v.isOwner;
    j["positionPreferences"] = v.positionPreferences;
    j["showPositionExcluder"] = v.showPositionExcluder;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyMember_t& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.canInviteOthers = j.at("canInviteOthers").get<bool>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.isOwner = j.at("isOwner").get<bool>();
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyTeamBuilderLobbyPositionPreferences_t>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
  }
}
