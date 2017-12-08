#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2Honor_t {
    std::string_t voterRelationship;
    std::string_t honorCategory;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2Honor_t& v) {
    j["voterRelationship"] = v.voterRelationship;
    j["honorCategory"] = v.honorCategory;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2Honor_t& v) {
    v.voterRelationship = j.at("voterRelationship").get<std::string_t>();
    v.honorCategory = j.at("honorCategory").get<std::string_t>();
  }
  inline std::string to_string(const LolHonorV2Honor_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
