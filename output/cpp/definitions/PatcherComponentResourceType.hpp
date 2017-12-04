#ifndef SWAGGER_TYPES_PatcherComponentResourceType_HPP
#define SWAGGER_TYPES_PatcherComponentResourceType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class PatcherComponentResourceType {
    // 
    project = 0,
    // 
    solution = 1,
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentResourceType& v) {
    switch(v) {
      case PatcherComponentResourceType::project:
        j = "project";
      break;
      case PatcherComponentResourceType::solution:
        j = "solution";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentResourceType& v) {
    const auto& s = j.get<std::string>();
    if(s == "project"){
      v = PatcherComponentResourceType::project;
      return;
    }
    if(s == "solution"){
      v = PatcherComponentResourceType::solution;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PatcherComponentResourceType_HPP
