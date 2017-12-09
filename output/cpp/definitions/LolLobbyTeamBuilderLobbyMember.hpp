#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderLobbyPositionPreferences.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyMember_t {
    bool autoFillEligible;
    bool autoFillProtectedForSoloing;
    bool autoFillProtectedForPromos;
    LolLobbyTeamBuilderLobbyPositionPreferences_t positionPreferences;
    bool canInviteOthers;
    std::optional<std::string> excludedPositionPreference;
    bool isOwner;
    uint64_t id;
    bool showPositionExcluder;
    bool autoFillProtectedForStreaking;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyMember_t& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["positionPreferences"] = v.positionPreferences;
    j["canInviteOthers"] = v.canInviteOthers;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["isOwner"] = v.isOwner;
    j["id"] = v.id;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyMember_t& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyTeamBuilderLobbyPositionPreferences_t>();
    v.canInviteOthers = j.at("canInviteOthers").get<bool>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
    v.isOwner = j.at("isOwner").get<bool>();
    v.id = j.at("id").get<uint64_t>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderLobbyMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
