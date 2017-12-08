#pragma once
#include <json.hpp>
#include <optional>
#include "ClubPermissions.hpp"
#include "ClubMember.hpp"
#include "ClubRole.hpp"
#include "ClubMemberLists.hpp"
namespace leagueapi {
  struct PlayerClub_t {
    bool isClubTagEligible;
    std::string motd;
    std::string description;
    int64_t created;
    int64_t lastModified;
    std::string jid;
    bool primary;
    ClubMemberLists_t members;
    std::string tag;
    ClubRole_t role;
    std::string key;
    ClubMember_t owner;
    ClubPermissions_t permissions;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const PlayerClub_t& v) {
    j["isClubTagEligible"] = v.isClubTagEligible;
    j["motd"] = v.motd;
    j["description"] = v.description;
    j["created"] = v.created;
    j["lastModified"] = v.lastModified;
    j["jid"] = v.jid;
    j["primary"] = v.primary;
    j["members"] = v.members;
    j["tag"] = v.tag;
    j["role"] = v.role;
    j["key"] = v.key;
    j["owner"] = v.owner;
    j["permissions"] = v.permissions;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, PlayerClub_t& v) {
    v.isClubTagEligible = j.at("isClubTagEligible").get<bool>();
    v.motd = j.at("motd").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.created = j.at("created").get<int64_t>();
    v.lastModified = j.at("lastModified").get<int64_t>();
    v.jid = j.at("jid").get<std::string>();
    v.primary = j.at("primary").get<bool>();
    v.members = j.at("members").get<ClubMemberLists_t>();
    v.tag = j.at("tag").get<std::string>();
    v.role = j.at("role").get<ClubRole_t>();
    v.key = j.at("key").get<std::string>();
    v.owner = j.at("owner").get<ClubMember_t>();
    v.permissions = j.at("permissions").get<ClubPermissions_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const PlayerClub_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
