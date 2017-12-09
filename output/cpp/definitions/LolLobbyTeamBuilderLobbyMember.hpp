#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderLobbyPositionPreferences.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyMember_t {
    bool autoFillProtectedForStreaking;
    std::optional<std::string> excludedPositionPreference;
    bool autoFillEligible;
    bool autoFillProtectedForPromos;
    bool canInviteOthers;
    uint64_t id;
    bool autoFillProtectedForSoloing;
    bool showPositionExcluder;
    LolLobbyTeamBuilderLobbyPositionPreferences_t positionPreferences;
    bool isOwner;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyMember_t& v) {
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["canInviteOthers"] = v.canInviteOthers;
    j["id"] = v.id;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["showPositionExcluder"] = v.showPositionExcluder;
    j["positionPreferences"] = v.positionPreferences;
    j["isOwner"] = v.isOwner;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyMember_t& v) {
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::string>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.canInviteOthers = j.at("canInviteOthers").get<bool>();
    v.id = j.at("id").get<uint64_t>();
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>();
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>();
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyTeamBuilderLobbyPositionPreferences_t>();
    v.isOwner = j.at("isOwner").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderLobbyMember_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
