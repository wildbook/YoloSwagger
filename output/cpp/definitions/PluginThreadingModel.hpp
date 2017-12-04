#ifndef SWAGGER_TYPES_PluginThreadingModel_HPP
#define SWAGGER_TYPES_PluginThreadingModel_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class PluginThreadingModel {
    // 
    concurrent = 3,
    // 
    dedicated = 1,
    // 
    sequential = 2,
    // 
    parallel = 4,
  };

  inline void to_json(nlohmann::json& j, const PluginThreadingModel& v) {
    switch(v) {
      case PluginThreadingModel::concurrent:
        j = "concurrent";
      break;
      case PluginThreadingModel::dedicated:
        j = "dedicated";
      break;
      case PluginThreadingModel::sequential:
        j = "sequential";
      break;
      case PluginThreadingModel::parallel:
        j = "parallel";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PluginThreadingModel& v) {
    const auto& s = j.get<std::string>();
    if(s == "concurrent"){
      v = PluginThreadingModel::concurrent;
      return;
    }
    if(s == "dedicated"){
      v = PluginThreadingModel::dedicated;
      return;
    }
    if(s == "sequential"){
      v = PluginThreadingModel::sequential;
      return;
    }
    if(s == "parallel"){
      v = PluginThreadingModel::parallel;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PluginThreadingModel_HPP
