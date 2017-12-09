#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PublicRosterDTO_t {
    std::vector<uint64_t> memberIds;
    int32_t logo;
    int64_t id;
    std::string name;
    int32_t logoColor;
    std::string shortName;
  };

  inline void to_json(nlohmann::json& j, const PublicRosterDTO_t& v) {
    j["memberIds"] = v.memberIds;
    j["logo"] = v.logo;
    j["id"] = v.id;
    j["name"] = v.name;
    j["logoColor"] = v.logoColor;
    j["shortName"] = v.shortName;
  }

  inline void from_json(const nlohmann::json& j, PublicRosterDTO_t& v) {
    v.memberIds = j.at("memberIds").get<std::vector<uint64_t>>();
    v.logo = j.at("logo").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.shortName = j.at("shortName").get<std::string>();
  }
  inline std::string to_string(const PublicRosterDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
