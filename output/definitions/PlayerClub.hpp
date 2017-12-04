#ifndef SWAGGER_TYPES_PlayerClub_HPP
#define SWAGGER_TYPES_PlayerClub_HPP
#include <json.hpp>
#include "ClubMemberLists.hpp"
#include "ClubMember.hpp"
#include "ClubPermissions.hpp"
#include "ClubRole.hpp"
namespace leagueapi {
  // 
  struct PlayerClub {
    // 
    int64_t created;
    // 
    std::string description;
    // 
    bool isClubTagEligible;
    // 
    std::string jid;
    // 
    std::string key;
    // 
    int64_t lastModified;
    // 
    ClubMemberLists members;
    // 
    std::string motd;
    // 
    std::string name;
    // 
    ClubMember owner;
    // 
    ClubPermissions permissions;
    // 
    bool primary;
    // 
    ClubRole role;
    // 
    std::string tag;
  };

  inline void to_json(nlohmann::json& j, const PlayerClub& v) {
    j["created"] = v.created;
    j["description"] = v.description;
    j["isClubTagEligible"] = v.isClubTagEligible;
    j["jid"] = v.jid;
    j["key"] = v.key;
    j["lastModified"] = v.lastModified;
    j["members"] = v.members;
    j["motd"] = v.motd;
    j["name"] = v.name;
    j["owner"] = v.owner;
    j["permissions"] = v.permissions;
    j["primary"] = v.primary;
    j["role"] = v.role;
    j["tag"] = v.tag;
  }

  inline void from_json(const nlohmann::json& j, PlayerClub& v) {
    v.created = j.at("created").get<int64_t>;
    v.description = j.at("description").get<std::string>;
    v.isClubTagEligible = j.at("isClubTagEligible").get<bool>;
    v.jid = j.at("jid").get<std::string>;
    v.key = j.at("key").get<std::string>;
    v.lastModified = j.at("lastModified").get<int64_t>;
    v.members = j.at("members").get<ClubMemberLists>;
    v.motd = j.at("motd").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.owner = j.at("owner").get<ClubMember>;
    v.permissions = j.at("permissions").get<ClubPermissions>;
    v.primary = j.at("primary").get<bool>;
    v.role = j.at("role").get<ClubRole>;
    v.tag = j.at("tag").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PlayerClub_HPP
