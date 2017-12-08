#pragma once
#include <json.hpp>
#include <optional>
#include "ClubRole.hpp"
#include "ClubMember.hpp"
#include "ClubPermissions.hpp"
#include "ClubMemberLists.hpp"
namespace leagueapi {
  struct PlayerClub_t {
    ClubMember_t owner;
    int64_t lastModified;
    std::string motd;
    std::string name;
    int64_t created;
    std::string key;
    ClubRole_t role;
    bool primary;
    std::string description;
    std::string jid;
    bool isClubTagEligible;
    ClubMemberLists_t members;
    ClubPermissions_t permissions;
    std::string tag;
  };

  inline void to_json(nlohmann::json& j, const PlayerClub_t& v) {
    j["owner"] = v.owner;
    j["lastModified"] = v.lastModified;
    j["motd"] = v.motd;
    j["name"] = v.name;
    j["created"] = v.created;
    j["key"] = v.key;
    j["role"] = v.role;
    j["primary"] = v.primary;
    j["description"] = v.description;
    j["jid"] = v.jid;
    j["isClubTagEligible"] = v.isClubTagEligible;
    j["members"] = v.members;
    j["permissions"] = v.permissions;
    j["tag"] = v.tag;
  }

  inline void from_json(const nlohmann::json& j, PlayerClub_t& v) {
    v.owner = j.at("owner").get<ClubMember_t>();
    v.lastModified = j.at("lastModified").get<int64_t>();
    v.motd = j.at("motd").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.created = j.at("created").get<int64_t>();
    v.key = j.at("key").get<std::string>();
    v.role = j.at("role").get<ClubRole_t>();
    v.primary = j.at("primary").get<bool>();
    v.description = j.at("description").get<std::string>();
    v.jid = j.at("jid").get<std::string>();
    v.isClubTagEligible = j.at("isClubTagEligible").get<bool>();
    v.members = j.at("members").get<ClubMemberLists_t>();
    v.permissions = j.at("permissions").get<ClubPermissions_t>();
    v.tag = j.at("tag").get<std::string>();
  }
  inline std::string to_string(const PlayerClub_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
