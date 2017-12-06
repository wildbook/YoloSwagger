#pragma once
#include <json.hpp>
#include <optional>
#include "SeriesAlertDTO.hpp"
#include "SeriesMediaDTO.hpp"
namespace leagueapi {
  struct SeriesDTO_t {
    std::string title;
    int64_t startDate;
    std::string id;
    SeriesMediaDTO_t media;
    std::vector<SeriesAlertDTO_t> warnings;
    int64_t endDate;
    std::string description;
    std::string internalName;
    std::vector<std::string> tags;
    std::string parentName;
  };

  inline void to_json(nlohmann::json& j, const SeriesDTO_t& v) {
    j["title"] = v.title;
    j["startDate"] = v.startDate;
    j["id"] = v.id;
    j["media"] = v.media;
    j["warnings"] = v.warnings;
    j["endDate"] = v.endDate;
    j["description"] = v.description;
    j["internalName"] = v.internalName;
    j["tags"] = v.tags;
    j["parentName"] = v.parentName;
  }

  inline void from_json(const nlohmann::json& j, SeriesDTO_t& v) {
    v.title = j.at("title").get<std::string>();
    v.startDate = j.at("startDate").get<int64_t>();
    v.id = j.at("id").get<std::string>();
    v.media = j.at("media").get<SeriesMediaDTO_t>();
    v.warnings = j.at("warnings").get<std::vector<SeriesAlertDTO_t>>();
    v.endDate = j.at("endDate").get<int64_t>();
    v.description = j.at("description").get<std::string>();
    v.internalName = j.at("internalName").get<std::string>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.parentName = j.at("parentName").get<std::string>();
  }
}
