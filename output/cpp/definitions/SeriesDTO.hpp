#pragma once
#include <json.hpp>
#include <optional>
#include "SeriesAlertDTO.hpp"
#include "SeriesMediaDTO.hpp"
namespace leagueapi {
  struct SeriesDTO_t {
    std::string description;
    int64_t startDate;
    std::vector<std::string> tags;
    SeriesMediaDTO_t media;
    std::string title;
    std::string id;
    std::vector<SeriesAlertDTO_t> warnings;
    int64_t endDate;
    std::string parentName;
    std::string internalName;
  };

  inline void to_json(nlohmann::json& j, const SeriesDTO_t& v) {
    j["description"] = v.description;
    j["startDate"] = v.startDate;
    j["tags"] = v.tags;
    j["media"] = v.media;
    j["title"] = v.title;
    j["id"] = v.id;
    j["warnings"] = v.warnings;
    j["endDate"] = v.endDate;
    j["parentName"] = v.parentName;
    j["internalName"] = v.internalName;
  }

  inline void from_json(const nlohmann::json& j, SeriesDTO_t& v) {
    v.description = j.at("description").get<std::string>();
    v.startDate = j.at("startDate").get<int64_t>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.media = j.at("media").get<SeriesMediaDTO_t>();
    v.title = j.at("title").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.warnings = j.at("warnings").get<std::vector<SeriesAlertDTO_t>>();
    v.endDate = j.at("endDate").get<int64_t>();
    v.parentName = j.at("parentName").get<std::string>();
    v.internalName = j.at("internalName").get<std::string>();
  }
  inline std::string to_string(const SeriesDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
