#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderLobbyPositionPreferences.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyMember_t {
    bool isOwner;
    LolLobbyTeamBuilderLobbyPositionPreferences_t positionPreferences;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForStreaking;
    bool autoFillEligible;
    bool canInviteOthers;
    uint64_t id;
    bool autoFillProtectedForSoloing;
    bool showPositionExcluder;
    std::optional<std::string> excludedPositionPreference;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyMember_t& v) {
    j["isOwner"] = v.isOwner;
    j["positionPreferences"] = v.positionPreferences;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["autoFillEligible"] = v.autoFillEligible;
    j["canInviteOthers"] = v.canInviteOthers;
    j["id"] = v.id;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["showPositionExcluder"] = v.showPositionExcluder;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyMember_t& v) {
    v.isOwner = j.at("isOwner").get<bool>();
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyTeamBuilderLobbyPositionPreferences_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.canInviteOthers = j.at("canInviteOthers").get<bool>();
    v.id = j.at("id").get<uint64_t>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderLobbyMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
