#pragma once
#include <json.hpp>
#include <optional>
#include "ClubMember.hpp"
#include "ClubMemberLists.hpp"
#include "ClubRole.hpp"
#include "ClubPermissions.hpp"
namespace leagueapi {
  struct PlayerClub_t {
    bool primary;
    std::string key;
    std::string tag;
    int64_t created;
    std::string description;
    ClubMemberLists_t members;
    bool isClubTagEligible;
    ClubRole_t role;
    std::string name;
    int64_t lastModified;
    std::string motd;
    std::string jid;
    ClubMember_t owner;
    ClubPermissions_t permissions;
  };

  inline void to_json(nlohmann::json& j, const PlayerClub_t& v) {
    j["primary"] = v.primary;
    j["key"] = v.key;
    j["tag"] = v.tag;
    j["created"] = v.created;
    j["description"] = v.description;
    j["members"] = v.members;
    j["isClubTagEligible"] = v.isClubTagEligible;
    j["role"] = v.role;
    j["name"] = v.name;
    j["lastModified"] = v.lastModified;
    j["motd"] = v.motd;
    j["jid"] = v.jid;
    j["owner"] = v.owner;
    j["permissions"] = v.permissions;
  }

  inline void from_json(const nlohmann::json& j, PlayerClub_t& v) {
    v.primary = j.at("primary").get<bool>();
    v.key = j.at("key").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
    v.created = j.at("created").get<int64_t>();
    v.description = j.at("description").get<std::string>();
    v.members = j.at("members").get<ClubMemberLists_t>();
    v.isClubTagEligible = j.at("isClubTagEligible").get<bool>();
    v.role = j.at("role").get<ClubRole_t>();
    v.name = j.at("name").get<std::string>();
    v.lastModified = j.at("lastModified").get<int64_t>();
    v.motd = j.at("motd").get<std::string>();
    v.jid = j.at("jid").get<std::string>();
    v.owner = j.at("owner").get<ClubMember_t>();
    v.permissions = j.at("permissions").get<ClubPermissions_t>();
  }
}
