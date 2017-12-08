#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2Honor_t {
    std::string voterRelationship;
    std::string honorCategory;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2Honor_t& v) {
    j["voterRelationship"] = v.voterRelationship;
    j["honorCategory"] = v.honorCategory;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2Honor_t& v) {
    v.voterRelationship = j.at("voterRelationship").get<std::string>();
    v.honorCategory = j.at("honorCategory").get<std::string>();
  }
  inline std::string to_string(const LolHonorV2Honor_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
