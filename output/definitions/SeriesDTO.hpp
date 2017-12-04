#ifndef SWAGGER_TYPES_SeriesDTO_HPP
#define SWAGGER_TYPES_SeriesDTO_HPP
#include <json.hpp>
#include "SeriesAlertDTO.hpp"
#include "SeriesMediaDTO.hpp"
namespace leagueapi {
  // 
  struct SeriesDTO {
    // 
    std::string description;
    // 
    int64_t endDate;
    // 
    std::string id;
    // 
    std::string internalName;
    // 
    SeriesMediaDTO media;
    // 
    std::string parentName;
    // 
    int64_t startDate;
    // 
    std::vector<std::string> tags;
    // 
    std::string title;
    // 
    std::vector<SeriesAlertDTO> warnings;
  };

  void to_json(nlohmann::json& j, const SeriesDTO& v) {
    j["description"] = v.description;
    j["endDate"] = v.endDate;
    j["id"] = v.id;
    j["internalName"] = v.internalName;
    j["media"] = v.media;
    j["parentName"] = v.parentName;
    j["startDate"] = v.startDate;
    j["tags"] = v.tags;
    j["title"] = v.title;
    j["warnings"] = v.warnings;
  }

  void from_json(const nlohmann::json& j, SeriesDTO& v) {
    v.description = j.at("description").get<std::string>;
    v.endDate = j.at("endDate").get<int64_t>;
    v.id = j.at("id").get<std::string>;
    v.internalName = j.at("internalName").get<std::string>;
    v.media = j.at("media").get<SeriesMediaDTO>;
    v.parentName = j.at("parentName").get<std::string>;
    v.startDate = j.at("startDate").get<int64_t>;
    v.tags = j.at("tags").get<std::vector<std::string>>;
    v.title = j.at("title").get<std::string>;
    v.warnings = j.at("warnings").get<std::vector<SeriesAlertDTO>>;
  }

}
#endif // SWAGGER_TYPES_SeriesDTO_HPP
