#pragma once
#include <json.hpp>
#include <optional>
#include "ClubPermissions.hpp"
namespace leagueapi {
  struct ClubDataDto_t {
    std::string motd;
    std::string tag;
    int64_t createdTs;
    ClubPermissions_t permissionMap;
    std::string jid;
    std::string description;
    std::string name;
    std::string clubKey;
    int64_t lastModifiedTs;
    std::string role;
  };

  inline void to_json(nlohmann::json& j, const ClubDataDto_t& v) {
    j["motd"] = v.motd;
    j["tag"] = v.tag;
    j["createdTs"] = v.createdTs;
    j["permissionMap"] = v.permissionMap;
    j["jid"] = v.jid;
    j["description"] = v.description;
    j["name"] = v.name;
    j["clubKey"] = v.clubKey;
    j["lastModifiedTs"] = v.lastModifiedTs;
    j["role"] = v.role;
  }

  inline void from_json(const nlohmann::json& j, ClubDataDto_t& v) {
    v.motd = j.at("motd").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
    v.createdTs = j.at("createdTs").get<int64_t>();
    v.permissionMap = j.at("permissionMap").get<ClubPermissions_t>();
    v.jid = j.at("jid").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.clubKey = j.at("clubKey").get<std::string>();
    v.lastModifiedTs = j.at("lastModifiedTs").get<int64_t>();
    v.role = j.at("role").get<std::string>();
  }
  inline std::string to_string(const ClubDataDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
