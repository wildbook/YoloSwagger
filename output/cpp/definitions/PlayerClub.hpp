#pragma once
#include <json.hpp>
#include <optional>
#include "ClubPermissions.hpp"
#include "ClubMember.hpp"
#include "ClubRole.hpp"
#include "ClubMemberLists.hpp"
namespace leagueapi {
  struct PlayerClub_t {
    std::string description;
    std::string key;
    std::string tag;
    ClubRole_t role;
    std::string motd;
    ClubPermissions_t permissions;
    std::string jid;
    bool isClubTagEligible;
    int64_t lastModified;
    bool primary;
    ClubMember_t owner;
    int64_t created;
    std::string name;
    ClubMemberLists_t members;
  };

  inline void to_json(nlohmann::json& j, const PlayerClub_t& v) {
    j["description"] = v.description;
    j["key"] = v.key;
    j["tag"] = v.tag;
    j["role"] = v.role;
    j["motd"] = v.motd;
    j["permissions"] = v.permissions;
    j["jid"] = v.jid;
    j["isClubTagEligible"] = v.isClubTagEligible;
    j["lastModified"] = v.lastModified;
    j["primary"] = v.primary;
    j["owner"] = v.owner;
    j["created"] = v.created;
    j["name"] = v.name;
    j["members"] = v.members;
  }

  inline void from_json(const nlohmann::json& j, PlayerClub_t& v) {
    v.description = j.at("description").get<std::string>();
    v.key = j.at("key").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
    v.role = j.at("role").get<ClubRole_t>();
    v.motd = j.at("motd").get<std::string>();
    v.permissions = j.at("permissions").get<ClubPermissions_t>();
    v.jid = j.at("jid").get<std::string>();
    v.isClubTagEligible = j.at("isClubTagEligible").get<bool>();
    v.lastModified = j.at("lastModified").get<int64_t>();
    v.primary = j.at("primary").get<bool>();
    v.owner = j.at("owner").get<ClubMember_t>();
    v.created = j.at("created").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.members = j.at("members").get<ClubMemberLists_t>();
  }
  inline std::string to_string(const PlayerClub_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
